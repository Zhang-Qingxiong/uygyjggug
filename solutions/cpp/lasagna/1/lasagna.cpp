// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    // TODO: Return the correct time.
    return 40;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    int remaining_time = ovenTime() - actualMinutesInOven;
    // TODO: Calculate and return the remaining in the oven based on the time
    // the lasagna has already been there.
    return remaining_time;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    int pre_time = numberOfLayers * 2;
    // TODO: Calculate and return the preparation time with the
    // `numberOfLayers`.
    return pre_time;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    int present_total_time = preparationTime(numberOfLayers) + actualMinutesInOven;
    // TODO: Calculate and return the total time so far.
    return present_total_time;
}
