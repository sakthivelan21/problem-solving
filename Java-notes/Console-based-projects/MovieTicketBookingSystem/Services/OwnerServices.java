package Services;

import java.util.ArrayList;
import java.util.List;

import Models.Movie;
import Models.OwnerLoginModel;

public class OwnerServices {
    private List<Movie> movieList;
    private List<OwnerLoginModel> ownerAuthList;
    public OwnerServices(){
        this.movieList = new ArrayList<Movie>();
        this.ownerAuthList  = new ArrayList<OwnerLoginModel>();

        // Adding default owner login details 
        this.ownerAuthList.add(
            new OwnerLoginModel("Sakthi", "sakthi123"));
    }

    public boolean AuthenticateUser(OwnerLoginModel loginModel)
    {
        for(OwnerLoginModel ownerLoginModel : ownerAuthList)
        {
                if(ownerLoginModel.getUserName().equals(loginModel.getUserName()) && 
                    ownerLoginModel.getPassword().equals(loginModel.getPassword()))
                    return true;
        }
        return false;
    }

    public void addNewMovie(Movie movie)
    {
        movie.setId(this.movieList.size()+1);
        this.movieList.add(movie);
    }

    public Movie findMovieById(int id)
    {
        for(Movie movie : movieList)
        {
            if(movie.getId()==id)
                return movie;
        }
        return null;
    }

    public int getMovieIndexByMovieId(int id){
        for(int i=0;i<movieList.size();i++)
        {
            if(movieList.get(i).getId()==id)
                return i;
        }
        return -1;
    }

    public Movie getMovieByIndex(int index)
    {
        return this.movieList.get(index);
    }

    public void deleteMovieByIndex(int index)
    {
       this.movieList.remove(index);
    }

    public void showMovieList(){
        if(movieList.size()==0)
        {
            System.out.println("Movie List is Empty !!! Add a new movie to see them");
            return;
        }
        System.out.println("Showing movie List");
        for(Movie movie : movieList)
        {
            System.out.println(movie.getId()+ " " +movie.getName()+" price : "+movie.getPrice()+" "+movie.getFormat()+" " +movie.getDate()+" "+movie.getTime());
            System.out.println("Total Seats"+movie.getMaxSeats());
        }    
    }

    public void showTotalBookings(){
        if(movieList.size()==0)
        {
            System.out.println("Movie List is Empty !!! Add a new movie to see them");
            return;
        }
        System.out.println("Showing Total Bookings of Movies");
        for(Movie movie : movieList)
        {
            System.out.println(movie.getName() + " Booked Seats : "+movie.getBookingsCount()+" TotalSeats : "+movie.getMaxSeats());
        }
    }

    public void addTickets(int movieId,int ticketsCount)
    {
        Movie movie = this.findMovieById(movieId);
        movie.setBookingsCount(movie.getBookingsCount()+ticketsCount);
    }

    public void removeTickets(int movieId,int ticketsCount){
        Movie movie = this.findMovieById(movieId);
        movie.setBookingsCount(movie.getBookingsCount()-ticketsCount);
    }
}
