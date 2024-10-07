#ifndef STUDY_HPP
#define STUDY_HPP

template <class T>
class Study{
    public:
        Study();
        void setData(T somedata);
        T getData() const;
    
    private:
        T mydata;
};
#endif