#include <iostream>
#include <string>
using namespace std;

class Doctor {
private:
    string DoctorName;
    string Specialization;
public:
    static string HospitalName;

    Doctor(string name, string spec) {
        DoctorName = name;
        Specialization = spec;
    }
    void setDoctorName(string name) {
        DoctorName = name;
    }
    void setSpecialization(string spec) {
        Specialization = spec;
    }
    static void setHospitalName(string hName) {
        HospitalName = hName;
    }
    string getDoctorName() {
        return DoctorName;
    }
    string getSpecialization() {
        return Specialization;
    }
    static string getHospitalName() {
        return HospitalName;
    }
    void displayDoctor() {
        cout << DoctorName << endl;
        cout << Specialization << endl;
        cout << HospitalName << endl;
    }
};

string Doctor::HospitalName = "City Hospital";

int main() {
    Doctor doc1("Dr. Ahmad", "Cardiologist");
    Doctor doc2("Dr. Fatima", "Neurologist");

    Doctor::setHospitalName("National Hospital");

    doc1.displayDoctor();
    doc2.displayDoctor();
}