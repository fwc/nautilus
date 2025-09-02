/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1333
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1333
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
void test(val<long long int> var_0, val<unsigned long long int> var_2, val<unsigned char> var_5, val<unsigned long long int> var_8, val<short> var_10, val<signed char> var_11, val<int> zero, val<signed char*> var_15, val<bool*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) >= (((((/* implicit */val<bool>) (val<unsigned short>)7062)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (var_8)))))) ^ (((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_10)) ? (var_8) : (((/* implicit */val<unsigned long long int>) var_0)))) >= (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)127))) : (var_0)))))))));
    *var_16 = ((/* implicit */val<bool>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9141017648588650227LL;
unsigned long long int var_2 = 12083117485959428414ULL;
unsigned char var_5 = (unsigned char)121;
unsigned long long int var_8 = 6800313132610233669ULL;
short var_10 = (short)21587;
signed char var_11 = (signed char)-51;
int zero = 0;
signed char var_15 = (signed char)124;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_8, var_10, var_11, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
