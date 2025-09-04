/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1952
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1952
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
void test(val<unsigned long long int> var_1, val<unsigned short> var_2, val<unsigned char> var_6, val<signed char> var_7, val<unsigned char> var_12, val<unsigned char> var_14, val<unsigned char> var_16, val<int> zero, val<unsigned char*> var_17, val<unsigned short*> var_18, val<unsigned short*> var_19) {
    *var_17 = ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) var_14))));
    *var_18 = ((/* implicit */val<unsigned short>) min((((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)11))))) : (((/* implicit */val<int>) ((val<unsigned char>) var_2))))), (((/* implicit */val<int>) (val<unsigned char>)146))));
    *var_19 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) (val<unsigned char>)109)) : (((/* implicit */val<int>) var_7)))))))), (((((/* implicit */val<bool>) max((((/* implicit */val<unsigned char>) (val<signed char>)122)), (var_6)))) ? (((/* implicit */val<int>) max((var_14), (var_16)))) : (((/* implicit */val<int>) ((val<unsigned char>) (val<unsigned char>)127)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 481923920640464946ULL;
unsigned short var_2 = (unsigned short)28766;
unsigned char var_6 = (unsigned char)39;
signed char var_7 = (signed char)62;
unsigned char var_12 = (unsigned char)24;
unsigned char var_14 = (unsigned char)147;
unsigned char var_16 = (unsigned char)223;
int zero = 0;
unsigned char var_17 = (unsigned char)196;
unsigned short var_18 = (unsigned short)24510;
unsigned short var_19 = (unsigned short)45752;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)147;
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != (unsigned short)223;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_7, var_12, var_14, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
