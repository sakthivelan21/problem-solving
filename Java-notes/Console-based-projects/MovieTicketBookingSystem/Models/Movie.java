package Models;

import java.time.LocalTime;
import java.util.Date;

public class Movie {
    private int id;
    private String name;
    private String format;
    private Date date;
    private LocalTime time;
    private double price;
    private int bookingsCount;
    private int maxSeats;

    public Movie(){}

    public Movie(int id,String name,String format,Date date,LocalTime time,double price,int bookingsCount,int maxSeats)
    {
        this.id = id;
        this.name=name;
        this.format = format;
        this.date =date;
        this.time = time;
        this.price = price;
        this.bookingsCount = bookingsCount;
        this.maxSeats=maxSeats;
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

    public String getFormat(){
        return this.format;
    }
    public void setFormat(String format)
    {
        this.format= format;
    }

    public Date getDate()
    {
        return this.date;
    }

    public void setDate(Date date)
    {
        this.date = date;
    }
    public LocalTime getTime(){
        return this.time;
    }
    public void setTime(LocalTime time)
    {
        this.time=time;
    }
    public double getPrice()
    {
        return this.price;
    }
    public void setPrice(double price)
    {
        this.price = price;
    }
    public int getBookingsCount()
    {
        return this.bookingsCount;
    }
    public void setBookingsCount(int seats)
    {
        this.bookingsCount = seats;
    }
    public void setMaxSeats(int maxSeats)
    {
        this.maxSeats=maxSeats;
    }
    public int getMaxSeats(){
        return this.maxSeats;
    }
}
