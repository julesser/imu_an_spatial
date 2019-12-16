#include <boost/test/unit_test.hpp>
#include <imu_an_spatial/Dummy.hpp>

using namespace imu_an_spatial;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    imu_an_spatial::DummyClass dummy;
    dummy.welcome();
}
