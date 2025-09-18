/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5994
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5994
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<bool> var_0, val<long long int> var_4, val<signed char> var_6, val<unsigned char> var_8, val<signed char> var_10, val<bool> var_11, val<signed char> var_12, val<signed char> var_16, val<bool> var_19, val<int> zero, val<unsigned long long int*> var_20, val<signed char*> var_21, val<unsigned short*> var_22, val<unsigned long long int*> var_23) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<short>) (~(((/* implicit */val<int>) var_11)))))) ? (((/* implicit */val<int>) (!((!(((/* implicit */val<bool>) var_8))))))) : (min((((/* implicit */val<int>) var_16)), (((((((/* implicit */val<int>) var_12)) + (2147483647))) << (((14022809337701576166ULL) - (14022809337701576166ULL))))))))))
    {
        *var_20 += ((/* implicit */val<unsigned long long int>) ((((val<unsigned long long int>) (!((val<bool>)1)))) >= (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((var_4), (((/* implicit */val<long long int>) var_6))))) ? (((/* implicit */val<int>) var_19)) : (((/* implicit */val<int>) max(((val<unsigned short>)65525), (((/* implicit */val<unsigned short>) (val<bool>)1))))))))));
        *var_21 -= var_10;
        *var_22 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) (!(var_0)))) + (((/* implicit */val<int>) ((((/* implicit */val<int>) var_11)) != (((/* implicit */val<int>) var_6))))))))));
    }

    *var_23 |= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_0)) == (((/* implicit */val<int>) min(((val<bool>)1), ((val<bool>)1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
long long int var_4 = 668879525989762186LL;
signed char var_6 = (signed char)41;
unsigned char var_8 = (unsigned char)170;
signed char var_10 = (signed char)50;
bool var_11 = (bool)1;
signed char var_12 = (signed char)-91;
signed char var_16 = (signed char)51;
bool var_19 = (bool)1;
int zero = 0;
unsigned long long int var_20 = 2934495109584325429ULL;
signed char var_21 = (signed char)90;
unsigned short var_22 = (unsigned short)16735;
unsigned long long int var_23 = 8258305346803476634ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2934495109584325429ULL;
    value_mismatch |= var_21 != (signed char)40;
    value_mismatch |= var_22 != (unsigned short)0;
    value_mismatch |= var_23 != 8258305346803476634ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_8, var_10, var_11, var_12, var_16, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
