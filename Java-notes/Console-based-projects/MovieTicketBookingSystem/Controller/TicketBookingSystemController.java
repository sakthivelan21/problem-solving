package Controller;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalTime;
import java.util.Scanner;

import Models.Movie;
import Models.OwnerLoginModel;
import Models.TicketDetails;
import Services.OwnerServices;
import Services.TicketBookingService;

public class TicketBookingSystemController {
    private OwnerServices ownerServices;
    private TicketBookingService ticketBookingService;
    private Scanner scanner;

    public TicketBookingSystemController()
    {
        this.ownerServices = new OwnerServices();
        this.scanner = new Scanner(System.in);
        this.ticketBookingService = new TicketBookingService();
    }

    public void runTicketBookingSystem(){
        System.out.println("WELCOME TO MOVIE TICKET BOOKING SYSTEM");
        int choice;
        do{
            System.out.println("Your Choices");
            System.out.println("1. Customer Panal");
            System.out.println("2. Owner Panal");
            System.out.println("0. Exit");
            System.out.print("Enter your choice : ");
            choice = scanner.nextInt();
            scanner.nextLine();
            if(choice ==1)
            {
                int customerChoice;
                

                do{
                    System.out.println("Your choices");
                    System.out.println("1. Book Ticket");
                    System.out.println("2. Cancel Ticket");
                    System.out.println("3. Show Movie List");
                    System.out.println("4. show My Ticket");
                    System.out.println("5. exit");
                    System.out.print("Enter your choice : ");
                customerChoice = scanner.nextInt();
                scanner.nextLine();
                    if(customerChoice ==1)
                    {
                        System.out.println("Available movies !!!");
                        this.ownerServices.showMovieList();
                        System.out.println("To Book your tickets !!! Kindly fill the details !!!");
                        TicketDetails ticketDetails = new TicketDetails();
                        System.out.print("Enter your name : ");
                        ticketDetails.setName(scanner.nextLine());
                        System.out.print("Enter your phone number :");
                        ticketDetails.setPhoneNo(scanner.nextLong());
                        scanner.nextLine();
                        System.out.print("Enter Movie id :");
                        int movieId = scanner.nextInt();
                        scanner.nextLine();
                        Movie movie = ownerServices.findMovieById(movieId);
                        if(movie==null)
                        {
                            System.out.print("Invalid Movie Id");
                            continue;
                        }
                        ticketDetails.setMovieId(movieId);
                        ticketDetails.setMovieFormat(movie.getFormat());
                        ticketDetails.setMovieDate(movie.getDate());
                        ticketDetails.setMovieTime(movie.getTime());
                        ticketDetails.setMovieName(movie.getName());

                        System.out.print("Enter the number of seats : ");
                        int seatsCount = scanner.nextInt();
                        ticketDetails.setTotalSeats(seatsCount);
                        scanner.nextLine();
                        if(seatsCount<=(movie.getMaxSeats() - movie.getBookingsCount()))
                        {
                            ticketDetails.setPrice(movie.getPrice()*seatsCount);
                            System.out.println("Price is "+ ticketDetails.getPrice());
                            System.out.println("Would you like to confirm and pay the tickets : Y or N - ");
                            System.out.print("Are you sure want to delete the movie ?? Y or N : ");
                            char userChoice = scanner.next().charAt(0);
                            if(Character.toLowerCase(userChoice)=='y')
                            {
                                ticketBookingService.bookTicket(ticketDetails);
                                ownerServices.addTickets(ticketDetails.getMovieId(),ticketDetails.getTotalSeats());
                                System.out.println("Movie Ticket Booked  Successfully !!!");
                            }
                            else{
                                System.out.println("Booking Skipped!!!");
                            }
                        }
                        else{
                            System.out.println("Seats not available only "+(movie.getMaxSeats() - movie.getBookingsCount())+" is available ");

                        }
                        
                        
                    }
                    else if(customerChoice ==2)
                    {
                        System.out.print("To cancel your ticket !!! Enter your ticket id : ");
                        int ticketId = scanner.nextInt();
                        scanner.nextLine();
                        TicketDetails ticketDetails = ticketBookingService.getTicketById(ticketId);

                        if(ticketDetails==null)
                        {
                            System.out.println("Invalide ticket id");
                            continue;
                        }
                        this.ownerServices.removeTickets(ticketDetails.getMovieId(),ticketDetails.getTotalSeats());
                        this.ticketBookingService.cancelTicket(ticketId);
                        
                    }
                    else if(customerChoice ==3)
                    {
                        ownerServices.showMovieList();
                    }
                    else if(customerChoice ==4)
                    {
                        System.out.println("Enter your Ticket Id: ");
                        int ticketId = scanner.nextInt();
                        scanner.nextLine();
                        this.ticketBookingService.showMyTicket(ticketId);
                    }
                    else if(customerChoice==5)
                    {
                        System.out.println("see you again...");
                        break;
                    }
                    else {
                        System.out.println("Enter valid choice !!!");
                    }
                }while(true);
            }
            else if(choice == 2)
            {
                OwnerLoginModel ownerLoginModel = new OwnerLoginModel();
                System.out.println("LOGIN TO MOVIE TICKET BOOKING SYSTEM");
                System.out.print("Username : ");
                String username = scanner.nextLine();
                ownerLoginModel.setUserName(username);
                System.out.print("Password : ");
                ownerLoginModel.setPassword(scanner.nextLine());
                if(ownerServices.AuthenticateUser(ownerLoginModel))
                {
                    System.out.println("Logged In Successfully...");
                    int ownerChoice;
                    do{
                        System.out.println("your choices");
                        System.out.println("1. Add New Movie");
                        System.out.println("2. Delete Movie");
                        System.out.println("3. Show Movie List");
                        System.out.println("4. See Total Bookings");
                        System.out.println("5. Logout");

                        System.out.print("Enter your choice : ");
                        ownerChoice = scanner.nextInt();
                        scanner.nextLine();
                        if(ownerChoice==1)
                        {
                            System.out.println("To Add New Movie : Enter The Needed Details Correctly !!!");
                            Movie movie = new Movie();

                            System.out.print("Enter Movie Name : ");
                            movie.setName(scanner.nextLine());
                            System.out.print("Enter Format (2D,3D) : ");
                            movie.setFormat(scanner.nextLine());
                            System.out.print("Enter the date for the movie(dd/mm/yyyy) : ");
                            String date = scanner.nextLine();
                            try {
                                movie.setDate(new SimpleDateFormat("dd/MM/yyyy").parse(date));
                            } catch (ParseException e) {
                                // TODO Auto-generated catch block
                                e.printStackTrace();
                            }
                            System.out.print("Enter Movie Show Timing (hh:mm:ss) : ");
                            String time = scanner.nextLine();
                            movie.setTime(LocalTime.parse(time));
                            System.out.print("Enter movie ticket price : ");
                            movie.setPrice(scanner.nextDouble());
                            System.out.print("Enter the movie booking seats limit : ");
                            movie.setMaxSeats(scanner.nextInt());

                            ownerServices.addNewMovie(movie);

                            System.out.println("New movie "+movie.getName()+"added Successfully");

                        }
                        else if(ownerChoice==2)
                        {
                            System.out.print("To Delete A Movie Enter the movie Id : ");
                            int movieId = scanner.nextInt();
                            scanner.nextLine();
                            int index = ownerServices.getMovieIndexByMovieId(movieId);
                            if(index==-1)
                            {
                                System.out.println("Movie with id "+movieId+" does not exist");
                            }
                            else{
                                Movie movie = ownerServices.getMovieByIndex(index);
                                System.out.println("Movie Details ");
                                System.out.println(movie.getId()+" "+movie.getName());
                                System.out.print("Are you sure want to delete the movie ?? Y or N : ");
                                char deleteChoice = scanner.next().charAt(0);
                                if(Character.toLowerCase(deleteChoice)=='y')
                                {
                                    ownerServices.deleteMovieByIndex(movieId);
                                    System.out.println("Movie removed Successfully !!!");
                                }
                                else{
                                    System.out.println("Deletion Skipped!!!");
                                }
                            }
                        }
                        else if(ownerChoice==3)
                        {
                            ownerServices.showMovieList();
                        }
                        else if(ownerChoice==4)
                        {
                            ownerServices.showTotalBookings();
                        }
                        else if(ownerChoice==5)
                        {
                            System.out.println("Logging out ... see you again...");
                            break;
                        }
                        else{
                            System.out.println("Enter valid choice !!!");
                        }
                    }while(true);
                }
                else{
                    System.out.print("Invalid Username or Password !!! Try Again !!!");
                }
            }
            else if(choice == 0)
            {
                break;
            }
            else {
                System.out.println("Enter valid choice !!!");
            }
        }while(true);
    }
    
}
