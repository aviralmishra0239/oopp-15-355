#include<iostream>

using namespace std;

class NotificationService{
    public:                            
    void SendAlert(long phoneNumber , int otp){
        cout<<"Send otp: "<<otp<<"To mobile : "<<phoneNumber<<endl;
    }
    void SendAlert(string email , string subject , string body){
        cout<<"Send email to : "<<email<<" with subject : "<<subject<<" and body : "<<body<<endl;
    }
    void SendAlert(string deviceToken , string title , string payLoad , int priority){
        cout<<"Send push notification to device";
         token : "<<deviceToken<<" with title : "<<title<<" and payload : "<<payLoad<<" and priority : "<<priority<<endl;    
}

};


int main(){
    
    NotificationService notificationService;
    notificationService.SendAlert(1234567890, 1234);
    notificationService.SendAlert("abc@gmail.com", "Test Subject", "Test Body");
    notificationService.SendAlert("deviceToken123", "Test Title", "Test Payload", 1);

return 0;
}