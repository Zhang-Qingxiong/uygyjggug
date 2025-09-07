#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    if (kind == "car" || kind == "truck")
        return true;
    else 
        return false;
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.
    std::string fin_opt = option1 < option2 ? option1 : option2;
    return fin_opt + " is clearly the better choice.";
    //return "not yet implemented";
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    double price;
    // TODO: Return the age-corrected resell price.
    if (age < 3) 
        price = original_price * 0.8;
    else if (age >= 3 && age < 10) 
        price = original_price * 0.7;
    else 
        price = original_price * 0.5;
    return price;
}

}  // namespace vehicle_purchase
