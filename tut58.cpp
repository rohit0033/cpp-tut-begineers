// abstact are the classes which are made to inherit like cwh in this example  we know we are going in inherit further and there is cumplosry one pure virtual function

#include<iostream>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH( string s , float r){
            title = s;
            rating = r;

        }
        virtual void display(){} = 0 // do nothing function --> pure virtual function 


};

class CWHVideo : public CWH
{
    float videolength;
    public:
        CWHVideo( string s , float r , float vl): CWH(s,r){
            videolength = vl;
        }
        void display(){
            cout<<" this is amzing video with title "<<title<<endl;
            cout<<"ratings :"<<rating<<"out of 5 stars"<<endl;
            cout<<"length of this video is :"<<videolength<<"minutes"<<endl;
        }
};

class CWHText : public CWH
{
    int words;
    public:
        CWHText( string s , float r , int w): CWH(s,r){
            words = w;
        }
        void display(){
            cout<<" this is amzing video with title "<<title<<endl;
            cout<<"ratings :"<<rating<<"out of 5 stars"<<endl;
            cout<<"the no word in the video  :"<<words<<endl;
        }
};


int main(){
    string title;
    float rating , vl;
    int w;

    // for code with harry video ( CWH video)
    title = " Django tutorial ";
    vl = 5.36;
    rating = 4 ;
    CWHVideo djvideo(title , rating , vl);

    title = " Django tutorial ";
    vl = 699;
    rating = 4 ;
    w = 5455;
    CWHText djtext(title , rating , w);

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    
    return 0;
}
