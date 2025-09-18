/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9932
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9932
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
void test(val<unsigned long long int> var_7, val<unsigned short> var_12, val<int> zero, val<bool*> var_18, val<unsigned char*> var_19) {
    *var_18 = ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) 2636549368780667422ULL)))) >= (var_7));
    *var_19 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 1831423653162332598ULL;
unsigned short var_12 = (unsigned short)43923;
int zero = 0;
bool var_18 = (bool)1;
unsigned char var_19 = (unsigned char)186;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_12, zero, &var_18, &var_19);
  checksum();
}
