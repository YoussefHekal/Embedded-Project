

// to calculate the distance between 2 locations 

double haversine()
{
    double dlong = (longitude - previouslong) * d2r;// d2r is a constant to convert to radian defined in the header
    double dlat = (latitude - previouslat) * d2r;
    double a = pow(sin(dlat/2.0), 2) + cos(previouslat*d2r) * cos(latitude*d2r) * pow(sin(dlong/2.0), 2);
    double c = 2 * atan2(sqrt(a), sqrt(1-a));
    double d = R * c;		// R is the radius of the Earth Defined in the header file  

    return d * 1000;
}
