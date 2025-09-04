/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2621
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2621
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
void test(val<unsigned long long int> var_0, val<unsigned short> var_2, val<unsigned short> var_5, val<short> var_6, val<int> zero, val<unsigned long long int*> var_10, val<unsigned char*> var_11) {
    *var_10 = ((/* implicit */val<unsigned long long int>) var_6);
    *var_11 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<short>)-16384)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_2))))) < (var_0)))) / (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_5)) && (((/* implicit */val<bool>) ((val<unsigned short>) -4646571692736102193LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16344772796020008130ULL;
unsigned short var_2 = (unsigned short)9960;
unsigned short var_5 = (unsigned short)319;
short var_6 = (short)16739;
int zero = 0;
unsigned long long int var_10 = 18128733881446135908ULL;
unsigned char var_11 = (unsigned char)90;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 16739ULL;
    value_mismatch |= var_11 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
