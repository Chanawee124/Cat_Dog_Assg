//
//  cat_dog.h
//  LLC1
//
//  Created by 6272 on 22/3/2562 BE.
//  Copyright © 2562 6272. All rights reserved.
//
#ifndef cat_dog_h
#define cat_dog_h

class cat:public NODE{
    int size;
public:
    cat(int,int);
    void show_node(){
        cout<<"Meaw  "<<size<<" ";
        NODE::show_node();
    }
    ~cat();
};
cat::cat(int x, int y):NODE(x){
  size = y;
  cout<<"cat "<<size<<endl;
}

cat:: ~cat(){ 
    cout<<"Cat "<<size<< " " ;
}

class dog:public NODE{
    float height;
public:
    dog(int,float);
    void show_node(){
        cout<<"Hong Hong  "<<height<<" ";
        NODE::show_node();
    }
    ~dog();
};


dog::dog(int x, float y):NODE(x){
  height = y;
    cout<<"dog "<<height<<endl;

}

dog::~dog(){
  cout<<"Dog "<<height<< " ";
}
#endif /* cat_dog_h */
