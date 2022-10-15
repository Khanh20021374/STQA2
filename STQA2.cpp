#include <iostream>

std::string checkIQ(int IQ_score) {
    if (IQ_score < 0 || IQ_score > 300)
        return "Invalid";
    else {
        if (IQ_score < 90) {
            if (IQ_score > 79)
                return "Low Average";
            else {
                if (IQ_score > 69)
                    return "Borderline";
                else
                    return "Extremely Low";
            }
        }
        else {
            if (IQ_score < 110)
                return "Average";
            else {
                if (IQ_score < 120)
                    return "High Average";
                else {
                    if (IQ_score < 130)
                        return "Superior";
                    else
                        return "Very Superior";
                }
            }
        }
    }
}


int main()
{
    return 0;
}
