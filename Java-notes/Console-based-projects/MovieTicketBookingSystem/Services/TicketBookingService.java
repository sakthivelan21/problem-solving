package Services;

import java.util.ArrayList;
import java.util.List;

import Models.TicketDetails;

public class TicketBookingService {
    private List<TicketDetails> ticketList ;
    public TicketBookingService(){
        this.ticketList = new ArrayList<TicketDetails>();
    }

    public TicketDetails getTicketById(int id)
    {
        for(TicketDetails ticketDetails: ticketList)
        {
            if(ticketDetails.getId()==id)
            return ticketDetails;
        }
        return null;
    }

    public void showMyTicket(int id)
    {
        TicketDetails ticketDetails = this.getTicketById(id);
        if(ticketDetails==null)
        {
            System.out.println("Enter valid ticket id");
        }
        else{
            System.out.println("Your ticket is...");
            System.out.println("Ticket id : "+ticketDetails.getId());
            System.out.println("Movie Name "+ticketDetails.getMovieName());
            System.out.println("Movie Format"+ ticketDetails.getMovieFormat());
            System.out.println("Total Price : "+ticketDetails.getPrice());
            System.out.println("No.of Seats : "+ticketDetails.getTotalSeats());
            System.out.println("Date : "+ ticketDetails.getMovieDate());
            System.out.println("Time : "+ticketDetails.getMovieTime());            
        }

    }

    public int getTicketDetailsById(int id)
    {
        for(int i=0;i<ticketList.size();i++)
        {
            if(ticketList.get(i).getId() == id)
            {
                return i;
            }
        }
        return -1;
    }

    public void cancelTicket(int id){
        int index = this.getTicketDetailsById(id);
        if(index==-1)
        {   
            System.out.println("Enter valid ticket id");
        }
        else{
            ticketList.remove(index);
            System.out.println("Ticket cancelled Successfully !!!");
        }

    }

    public void bookTicket(TicketDetails ticketDetails){
        ticketDetails.setId(ticketList.size()+1);
        ticketList.add(ticketDetails);
       
    }

    
}
