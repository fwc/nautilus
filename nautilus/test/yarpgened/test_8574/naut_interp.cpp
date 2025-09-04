/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8574
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8574
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
void test(val<short> var_0, val<bool> var_1, val<unsigned char> var_6, val<unsigned short> var_7, val<unsigned long long int> var_11, val<int> zero, val<unsigned long long int*> var_16, val<long long int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_1)), (var_6)))) >= (((/* implicit */val<int>) ((val<signed char>) var_11))))))));
    *var_17 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned char>) var_0))) && (((/* implicit */val<bool>) (+((+(((/* implicit */val<int>) var_7)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27685;
bool var_1 = (bool)1;
unsigned char var_6 = (unsigned char)130;
unsigned short var_7 = (unsigned short)60517;
unsigned long long int var_11 = 18278579234829060392ULL;
int zero = 0;
unsigned long long int var_16 = 17169989411264539243ULL;
long long int var_17 = -6441994078466966533LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 18446744073709551615ULL;
    value_mismatch |= var_17 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_7, var_11, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
