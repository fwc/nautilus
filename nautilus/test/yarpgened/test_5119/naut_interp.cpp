/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5119
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5119
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
void test(val<bool> var_0, val<unsigned short> var_1, val<signed char> var_2, val<int> var_6, val<signed char> var_7, val<long long int> var_9, val<int> var_10, val<long long int> var_11, val<unsigned long long int> var_12, val<short> var_13, val<int> zero, val<bool*> var_14, val<int*> var_15, val<unsigned long long int*> var_16, val<int*> var_17, val<unsigned int*> var_18) {
    *var_14 = ((((/* implicit */val<int>) var_1)) != ((~(((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_0)) : (-1))))));
    *var_15 = ((/* implicit */val<int>) var_7);
    *var_16 &= min((((/* implicit */val<unsigned long long int>) ((var_11) <= (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<signed char>)0)) << (((var_9) + (8148042338987313740LL))))))))), (((((/* implicit */val<bool>) 1206736026972810293LL)) ? (((/* implicit */val<unsigned long long int>) min((var_11), (((/* implicit */val<long long int>) var_6))))) : ((-(var_12))))));
    *var_17 = ((/* implicit */val<int>) (val<signed char>)88);
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((((/* implicit */val<int>) var_13)) - (79)))))) ? (min((((/* implicit */val<unsigned long long int>) 2147483647)), (var_12))) : (((/* implicit */val<unsigned long long int>) (+(var_6))))))) ? (((/* implicit */val<int>) var_2)) : (((((/* implicit */val<int>) max((((/* implicit */val<signed char>) var_0)), ((val<signed char>)19)))) - (((2147483647) + (((/* implicit */val<int>) (val<short>)-1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned short var_1 = (unsigned short)45688;
signed char var_2 = (signed char)-14;
int var_6 = -408827255;
signed char var_7 = (signed char)-79;
long long int var_9 = -8148042338987313713LL;
int var_10 = -2082513010;
long long int var_11 = -4216266775870270877LL;
unsigned long long int var_12 = 116922494234048657ULL;
short var_13 = (short)90;
int zero = 0;
bool var_14 = (bool)1;
int var_15 = 1831143461;
unsigned long long int var_16 = 11354830187813760842ULL;
int var_17 = -658197150;
unsigned int var_18 = 3832901365U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != -79;
    value_mismatch |= var_16 != 0ULL;
    value_mismatch |= var_17 != 88;
    value_mismatch |= var_18 != 4294967282U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_6, var_7, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
