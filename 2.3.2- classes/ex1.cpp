double read_and_sum(int s)
{
Vector v(s); // make a vector of s elements
for (int i=0; i!=v.siz e(); ++i)
cin>>v[i]; // read into elements
double sum = 0;
for (int i=0; i!=v.siz e(); ++i)
sum+=v[i]; // take the sum of the elements
return sum;
}