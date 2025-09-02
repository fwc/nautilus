/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 729
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=729
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
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
void test(val<int> var_3, val<unsigned int> var_5, val<signed char> var_7, val<unsigned long long int> var_9, val<int> var_10, val<unsigned int> var_11, val<long long int> var_13, val<int> zero, val<int*> var_15, val<bool*> var_16, val<int*> var_17, val<int*> var_18) {
    *var_15 = ((/* implicit */val<int>) var_5);
    *var_16 |= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1063513107)) ? (((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) (val<unsigned char>)63)), (var_3)))) : (879444098U)));
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_13)) ? (var_11) : (((/* implicit */val<unsigned int>) (-(var_10))))));
    *var_18 = ((/* implicit */val<int>) max((*var_18), (((/* implicit */val<int>) ((((((/* implicit */val<bool>) ((var_13) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7)))))) ? (var_9) : (max((181761906740310626ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)169)))))) > (((/* implicit */val<unsigned long long int>) (((+(((/* implicit */val<int>) (val<unsigned char>)98)))) >> (((((/* implicit */val<int>) var_7)) - (48)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1379499;
unsigned int var_5 = 32000018U;
signed char var_7 = (signed char)60;
unsigned long long int var_9 = 14188090148076306251ULL;
int var_10 = 2106672592;
unsigned int var_11 = 849619762U;
long long int var_13 = 4502713223961255683LL;
int zero = 0;
int var_15 = -1129140239;
bool var_16 = (bool)0;
int var_17 = -1633186631;
int var_18 = 1073398851;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 32000018;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 849619762;
    value_mismatch |= var_18 != 1073398851;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_7, var_9, var_10, var_11, var_13, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
