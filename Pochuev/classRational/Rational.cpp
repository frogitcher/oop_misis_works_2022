#include"Rational.h"

std::ostream& operator << (std::ostream& stream, const Rational& obj) {
	if (obj.GetDen() == 1)
		return stream << obj.GetNum();
	return stream << obj.asString();
}
std::istream& operator>>(std::istream&stream,  Rational&obj){
		int a, b;
		char tmp;
		stream >>a >> tmp >> b;
		if (tmp == '.') {
			obj = Rational(std::stod(std::to_string(a) + ',' + std::to_string(b)));
		}
		else {
			obj = Rational(a, b);
		}
		return stream;
}

bool operator>(const double& lhs,const Rational& rhs){
	return lhs > rhs.asDouble();
}

bool operator<(const double& lhs, const Rational& rhs) {
	return lhs < rhs.asDouble();
}

bool operator>=(const double& lhs, const Rational& rhs){
	return lhs > rhs or lhs == rhs;
}

bool operator<=(const double& lhs, const Rational& rhs){
	return lhs < rhs or lhs == rhs;
}

bool operator==(const double& lhs, const Rational& rhs) {
	return lhs == rhs.asDouble();
}

bool operator!=(const double& lhs, const Rational& rhs){
	return lhs != rhs.asDouble();
}

void Rational::Normalise(){
	if (num < 0 and den < 0) { num *= -1; den *= -1; }
	int g = gcd(std::abs(num), std::abs(den));
	num /= g;
	den /= g;
}

Rational::Rational(const Rational& tmp){
	this->den = tmp.GetDen();
	this->num = tmp.GetNum();
	//std::cout << "copied";
}

Rational& Rational::operator=(const Rational& rhs){
	this->den = rhs.GetDen();
	this->num = rhs.GetNum();
	return *this;
}

Rational& Rational::operator=(Rational&&rhs){
	num = rhs.num;
	den = rhs.den;
	rhs.num = 0;
	rhs.den = 0;
	return *this;
}

Rational Rational::operator+(const Rational& rhs) const {
	return Rational(this->num * rhs.GetDen() + rhs.GetNum() * this->den, this->den * rhs.GetDen());
}

Rational& Rational::operator+=(const Rational& rhs){
	return *this = *this + rhs;
}

Rational Rational::operator-(const Rational& rhs) const{
	return Rational(this->GetNum()*rhs.GetDen() - rhs.GetNum()*this->GetDen(), this->GetDen()*rhs.GetDen());
}

Rational& Rational::operator-=(const Rational&rhs){
	return *this = *this - rhs;
}

Rational Rational::operator*(const Rational&rhs) const{
	return Rational(rhs.GetNum()*this->num,this->den * rhs.GetDen());
}

Rational& Rational::operator/=(const Rational&rhs){
	return *this = *this / rhs;
}

Rational& Rational::operator++(){
	return *this += 1;
}

Rational& Rational::operator++(int){
	Rational& temp = *this;
	*this += 1;
	return temp;
}

Rational& Rational::operator--(){	
	return *this -= 1;
}

Rational& Rational::operator--(int){
	Rational& temp = *this;
	*this -= 1;
	return temp;
}

bool Rational::operator==(const Rational&rhs)const{
	return (this->GetDen() == rhs.GetDen())and (this->GetNum() == rhs.GetNum());
}

bool Rational::operator!=(const Rational&rhs)const{
	return (this->GetDen() != rhs.GetDen()) or (this->GetNum() != rhs.GetNum());
}

bool Rational::operator>(const Rational&rhs)const{
	return (*this - rhs).GetNum() > 0;
}

bool Rational::operator<(const Rational&rhs) const{
	return (*this - rhs).GetNum() < 0;
}

bool Rational::operator>=(const Rational&rhs) const{
	return *this > rhs or *this == rhs;
}

bool Rational::operator<=(const Rational&rhs) const{
	return *this < rhs or *this == rhs;
}

bool Rational::operator==(const double&rhs) const{
	return this->asDouble() == rhs;
}

bool Rational::operator!=(const double&rhs) const{
	return this->asDouble() != rhs;
}

bool Rational::operator>(const double&rhs) const{
	return this->asDouble() > rhs;
}

bool Rational::operator<(const double&rhs) const{
	return this->asDouble() < rhs;
}

bool Rational::operator<=(const double&rhs) const{
	return this->asDouble() <= rhs;
}

bool Rational::operator>=(const double&rhs) const{
	return this->asDouble() >= rhs;
}

Rational Rational::operator/(const Rational&rhs)const{
	return Rational(this->num * rhs.GetDen(), this->den * rhs.GetNum());
}

Rational& Rational::operator*=(const Rational&rhs) {
	return *this = *this * rhs;
}
