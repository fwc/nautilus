/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 562
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=562
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
void test(val<int> var_1, val<int> var_4, val<int> var_5, val<unsigned short> var_7, val<bool> var_10, val<short> var_16, val<int> zero, val<long long int*> var_18, val<unsigned short*> var_19, val<unsigned short*> var_20, val<long long int*> var_21, val<signed char*> var_22) {
    *var_18 = ((/* implicit */val<long long int>) var_10);
    if (((/* implicit */val<bool>) var_4))
    {
        *var_19 = ((/* implicit */val<unsigned short>) var_1);
        *var_20 = ((/* implicit */val<unsigned short>) (+(var_4)));
        *var_21 |= ((/* implicit */val<long long int>) ((val<unsigned int>) (-(min((var_5), (((/* implicit */val<int>) var_7)))))));
        *var_22 = ((/* implicit */val<signed char>) var_16);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2019210018;
int var_4 = -723241096;
int var_5 = 2014645608;
unsigned short var_7 = (unsigned short)27859;
bool var_10 = (bool)0;
short var_16 = (short)-1875;
int zero = 0;
long long int var_18 = 7606577720075450576LL;
unsigned short var_19 = (unsigned short)56488;
unsigned short var_20 = (unsigned short)41650;
long long int var_21 = 2263501728572674273LL;
signed char var_22 = (signed char)57;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0LL;
    value_mismatch |= var_19 != (unsigned short)45858;
    value_mismatch |= var_20 != (unsigned short)14200;
    value_mismatch |= var_21 != 2263501731256046573LL;
    value_mismatch |= var_22 != (signed char)-83;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_7, var_10, var_16, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
