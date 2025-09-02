/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4821
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4821
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
void test(val<bool> var_0, val<unsigned short> var_1, val<unsigned long long int> var_2, val<unsigned long long int> var_3, val<bool> var_4, val<int> var_5, val<signed char> var_6, val<unsigned long long int> var_7, val<bool> var_8, val<unsigned int> var_9, val<int> zero, val<int*> var_10, val<bool*> var_11, val<bool*> var_12, val<int*> var_13, val<unsigned short*> var_14) {
    *var_10 = ((/* implicit */val<int>) (((-(min((var_3), (((/* implicit */val<unsigned long long int>) var_0)))))) != (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_8)), (var_9)))) ? (min((0), (-1))) : (((/* implicit */val<int>) max((((/* implicit */val<signed char>) (val<bool>)0)), (var_6)))))))));
    *var_11 = max((((-1661633565) == ((((val<bool>)1) ? (-1) : (676838710))))), (var_4));
    if (((/* implicit */val<bool>) min((((((/* implicit */val<unsigned long long int>) ((var_0) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : (1U)))) ^ (min((var_2), (((/* implicit */val<unsigned long long int>) var_5)))))), ((~(33554432ULL))))))
    {
        *var_12 -= ((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (var_3)));
        *var_13 = ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) - (var_7)))) ? (((/* implicit */val<int>) ((val<unsigned short>) min((((/* implicit */val<unsigned int>) var_6)), (var_9))))) : (((((/* implicit */val<bool>) max((337682321U), (((/* implicit */val<unsigned int>) (val<bool>)1))))) ? (((/* implicit */val<int>) (val<bool>)1)) : (max((((/* implicit */val<int>) var_0)), (67108800))))));
        *var_14 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((var_2) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3))))))))) ? (((/* implicit */val<unsigned int>) var_5)) : (var_9)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned short var_1 = (unsigned short)50404;
unsigned long long int var_2 = 475444927036315433ULL;
unsigned long long int var_3 = 107532863886294140ULL;
bool var_4 = (bool)0;
int var_5 = -1967302927;
signed char var_6 = (signed char)-67;
unsigned long long int var_7 = 17672514463164582517ULL;
bool var_8 = (bool)0;
unsigned int var_9 = 1033379967U;
int zero = 0;
int var_10 = -1371815065;
bool var_11 = (bool)0;
bool var_12 = (bool)1;
int var_13 = 577338970;
unsigned short var_14 = (unsigned short)42752;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0;
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != 8319;
    value_mismatch |= var_14 != (unsigned short)22257;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
