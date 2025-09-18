/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8709
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8709
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
void test(val<unsigned char> var_1, val<signed char> var_2, val<bool> var_3, val<signed char> var_4, val<unsigned short> var_8, val<signed char> var_9, val<unsigned char> var_14, val<bool> var_18, val<int> zero, val<unsigned long long int*> var_20, val<int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned long long int>) (~((((!(((/* implicit */val<bool>) (val<short>)32740)))) ? (-412080761) : (((((/* implicit */val<int>) var_2)) % (((/* implicit */val<int>) var_9))))))));
    *var_21 = ((/* implicit */val<int>) ((((((/* implicit */val<bool>) ((val<unsigned char>) var_4))) ? (((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) var_18)), (var_14)))) : (((/* implicit */val<int>) var_8)))) == ((~(((((/* implicit */val<int>) var_1)) ^ (((/* implicit */val<int>) var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)24;
signed char var_2 = (signed char)-96;
bool var_3 = (bool)1;
signed char var_4 = (signed char)-102;
unsigned short var_8 = (unsigned short)55773;
signed char var_9 = (signed char)106;
unsigned char var_14 = (unsigned char)238;
bool var_18 = (bool)1;
int zero = 0;
unsigned long long int var_20 = 9230328801660564953ULL;
int var_21 = 906792139;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 95ULL;
    value_mismatch |= var_21 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_8, var_9, var_14, var_18, zero, &var_20, &var_21);
  checksum();
}
