package Models;

import java.time.LocalTime;
import java.util.Date;

public class TicketDetails {
    private int id;
    private String name;
    private long phoneNo;
    private String movieName;
    private String movieFormat;
    private Date movieDate;
    private LocalTime movieTime;
    private double price;
    private int totalSeats;
    private int movieId;
    public TicketDetails(){}
    public TicketDetails(int id,String name,long phoneNo,String movieName,String movieFormat,Date movieDate,LocalTime movieTime,double price,int totalSeats, int movieId){
        this.id = id;
        this.name = name;
        this.phoneNo=phoneNo;
        this.movieName=movieName;
        this.movieFormat=movieFormat;
        this.movieDate=movieDate;
        this.movieTime=movieTime;
        this.price=price;
        this.totalSeats = totalSeats;
        this.movieId=movieId;

    }

    public int getId(){
        return this.id;
    }
    public void setId(int id)
    {
        this.id=id;
    }
    public void setName(String name)
    {
        this.name = name;
    }
    
    public String getName()
    {
        return this.name;
    }
    public long getPhoneNo()
    {
        return this.phoneNo;
    }

    public void setPhoneNo(long phoneNo)
    {
        this.phoneNo=phoneNo;
    }
    public String getMovieName(){
        return this.movieName;
    }
    public void setMovieName(String movieName){
        this.movieName=movieName;
    }
    public String getMovieFormat()
    {
        return this.movieFormat;
    }

    public void setMovieFormat(String movieFormat)
    {
        this.movieFormat=movieFormat;
    }

    public Date getMovieDate(){
        return this.movieDate;
    }
    public void setMovieDate(Date movieDate)
    {
        this.movieDate=movieDate;
    }
    public LocalTime getMovieTime(){
        return this.movieTime;
    }

    public void setMovieTime(LocalTime movieTime){
        this.movieTime = movieTime;
    }

    public int getTotalSeats(){
        return this.totalSeats;
    }
    public void setTotalSeats(int totalSeats){
        this.totalSeats = totalSeats;
    }

    public int getMovieId(){
        return this.movieId;
    }

    public void setMovieId(int id)
    {
        this.movieId = id;
    }

    public double getPrice()
    {
        return this.price;
    }
    public void setPrice(double price)
    {
        this.price = price;
    }


}
