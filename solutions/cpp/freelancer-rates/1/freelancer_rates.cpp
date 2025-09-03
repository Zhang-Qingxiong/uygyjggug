// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>
#include <cmath>
// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // TODO: Implement a function to calculate the daily rate given an hourly
    double dai_rate = hourly_rate * 8.0;
    // rate
    return dai_rate;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.
    double dis_pri = before_discount - before_discount * discount / 100.0;
    
    return dis_pri;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // TODO: Implement a function to calculate the monthly rate, and apply a
    // discount.
    double mon_fee = daily_rate(hourly_rate) * 22.0;
    int mon_rate = ceil (apply_discount(mon_fee, discount));
    
    return mon_rate;
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    double dai_rate = daily_rate(hourly_rate);
    double dai_rate_af_dis = apply_discount(dai_rate, discount);
    int days = floor(budget / dai_rate_af_dis);
    return days;
}
