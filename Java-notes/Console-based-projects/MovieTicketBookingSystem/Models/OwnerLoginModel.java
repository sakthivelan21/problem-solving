package Models;

public class OwnerLoginModel { 

    private String username;
    private String password;

    public OwnerLoginModel(){
        
    }

    public OwnerLoginModel(String username,String password){
        this.username = username;
        this.password= password;
    }

    public String getUserName(){
        return this.username;
    }

    public void setUserName(String username){
        this.username = username;
    }

    public String getPassword(){
        return this.password;
    }

    public void setPassword(String password){
        this.password = password;
    }

    
}
