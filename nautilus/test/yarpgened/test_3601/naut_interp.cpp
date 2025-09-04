/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3601
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3601
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
void test(val<unsigned short> var_2, val<long long int> var_7, val<short> var_9, val<unsigned long long int> var_13, val<int> zero, val<unsigned char*> var_20, val<signed char*> var_21) {
    *var_20 -= ((/* implicit */val<unsigned char>) ((295389658) == (((/* implicit */val<int>) (val<unsigned short>)34949))));
    *var_21 = ((/* implicit */val<signed char>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((var_13) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))))))) * (var_7))) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)435;
long long int var_7 = 5512298648363181260LL;
short var_9 = (short)-5596;
unsigned long long int var_13 = 2704669929426223021ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)37;
signed char var_21 = (signed char)76;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)37;
    value_mismatch |= var_21 != (signed char)-108;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_9, var_13, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
