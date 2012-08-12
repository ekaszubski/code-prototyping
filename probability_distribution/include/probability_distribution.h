#ifndef PROBABILITYDISTRIBUTION_H_
#define PROBABILITYDISTRIBUTION_H_

#include <ostream>
#include <sstream>

namespace pd
{
    struct Normal{};
    typedef Normal Gaussian;
}

class ProbabilityDistributionBase
{
protected:
    double center_;
    double concentration_;
    double skew_;
    double kurtosis_;

public:
    ProbabilityDistributionBase( double const & center = 0, double const & concentration = 0, double const & skew = 0, double const & kurtosis = 0 )
    :
        center_( center ),
        concentration_( concentration ),
        skew_( skew ),
        kurtosis_( kurtosis )
    {
        //
    }

    ProbabilityDistributionBase( ProbabilityDistributionBase const & other )
    :
        center_( other.center_ ),
        concentration_( other.concentration_ ),
        skew_( other.skew_ ),
        kurtosis_( other.kurtosis_ )
    {
        //
    }

    // #########################################################################################################################################
    ProbabilityDistributionBase operator+( ProbabilityDistributionBase const & other ) const
    {
        return ProbabilityDistributionBase( center_ + other.center_, concentration_ + other.concentration_ );
    }

    ProbabilityDistributionBase & operator+=( ProbabilityDistributionBase const & other )
    {

        center_ += other.center_;
        concentration_ += other.concentration_;

        return *this;
    }

    // #########################################################################################################################################
    ProbabilityDistributionBase operator-( ProbabilityDistributionBase const & other ) const
    {
        return ProbabilityDistributionBase( center_ - other.center_, concentration_ + other.concentration_ );
    }

    ProbabilityDistributionBase & operator-=( ProbabilityDistributionBase const & other )
    {

        center_ -= other.center_;
        concentration_ -= other.concentration_;

        return *this;
    }

    // #########################################################################################################################################
    ProbabilityDistributionBase operator*( ProbabilityDistributionBase const & other ) const
    {
        return ProbabilityDistributionBase( center_ * other.center_, concentration_ * other.concentration_ );
    }

    ProbabilityDistributionBase & operator*=( ProbabilityDistributionBase const & other )
    {

        center_ *= other.center_;
        concentration_ *= other.concentration_;

        return *this;
    }

    // #########################################################################################################################################
    ProbabilityDistributionBase operator/( ProbabilityDistributionBase const & other ) const
    {
        return ProbabilityDistributionBase( center_ / other.center_, concentration_ / other.concentration_ );
    }

    ProbabilityDistributionBase & operator/=( ProbabilityDistributionBase const & other )
    {

        center_ /= other.center_;
        concentration_ /= other.concentration_;

        return *this;
    }

    std::string toString() const
    {
        std::stringstream ss;
        ss << "center: " << center_ << " concentration: " << concentration_ << " skew: " << skew_ << " kurtosis: " << kurtosis_ << std::endl;
        return ss.str();
    }

    friend std::ostream & operator<<( std::ostream & stream, ProbabilityDistributionBase const & distribution )
    {
        stream << distribution.toString();
        return stream;
    }
};

template<class __Type>
class ProbabilityDistribution : ProbabilityDistributionBase
{
public:
    ProbabilityDistribution( double const & center = 0, double const & concentration = 1 )
    :
        ProbabilityDistributionBase( center, concentration, 0, 3 )
    {
        //
    }

    ProbabilityDistribution( ProbabilityDistribution<__Type> const & other )
    :
        ProbabilityDistributionBase( other )
    {
        //
    }
};

template<>
class ProbabilityDistribution<pd::Normal> : public ProbabilityDistributionBase
{
public:
    typedef ProbabilityDistribution<pd::Normal> _ProbabilityDistribution;

    ProbabilityDistribution( ProbabilityDistributionBase const & other )
    :
        ProbabilityDistributionBase( other )
    {
        //
    }

    template<class... __Args>
    ProbabilityDistribution( __Args&&... args )
    :
        ProbabilityDistributionBase( std::forward<__Args>( args )... )
    {
        //
    }

    // #########################################################################################################################################
    _ProbabilityDistribution operator+( _ProbabilityDistribution const & other ) const
    {
        return ProbabilityDistributionBase::operator+( other );
    }

    _ProbabilityDistribution & operator+=( _ProbabilityDistribution const & other )
    {
        ProbabilityDistributionBase::operator+=( other );
        return *this;
    }

    // #########################################################################################################################################
    _ProbabilityDistribution operator-( _ProbabilityDistribution const & other ) const
    {
        return ProbabilityDistributionBase::operator-( other );
    }

    _ProbabilityDistribution & operator-=( _ProbabilityDistribution const & other )
    {
        ProbabilityDistributionBase::operator-=( other );
        return *this;
    }

    // #########################################################################################################################################
    _ProbabilityDistribution operator*( _ProbabilityDistribution const & other ) const
    {
        return ProbabilityDistributionBase::operator*( other );
    }

    _ProbabilityDistribution & operator*=( _ProbabilityDistribution const & other )
    {
        ProbabilityDistributionBase::operator*=( other );
        return *this;
    }

    // #########################################################################################################################################
    _ProbabilityDistribution operator/( _ProbabilityDistribution const & other ) const
    {
        return ProbabilityDistributionBase::operator/( other );
    }

    _ProbabilityDistribution & operator/=( _ProbabilityDistribution const & other )
    {
        ProbabilityDistributionBase::operator/=( other );
        return *this;
    }
};

#endif // PROBABILITYDISTRIBUTION_H_
