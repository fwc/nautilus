/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7803
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7803
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
void test(val<unsigned long long int> var_0, val<unsigned short> var_4, val<long long int> var_5, val<long long int> var_6, val<short> var_11, val<short> var_12, val<int> zero, val<int*> var_13, val<unsigned short*> var_14, val<int*> var_15) {
    *var_13 = ((/* implicit */val<int>) ((var_0) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)244))))))));
    *var_14 -= ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_12)) && (((/* implicit */val<bool>) (val<unsigned char>)12)))) || (((/* implicit */val<bool>) min((var_6), (((/* implicit */val<long long int>) 2147483645))))))))) | (((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) var_11)), (var_5)))) * (max((((/* implicit */val<unsigned long long int>) (val<unsigned char>)213)), (4194928461768778461ULL)))))));
    *var_15 |= ((/* implicit */val<int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10078010406236657426ULL;
unsigned short var_4 = (unsigned short)28941;
long long int var_5 = 7397626125895053807LL;
long long int var_6 = -2709479644550943709LL;
short var_11 = (short)-30614;
short var_12 = (short)-24929;
int zero = 0;
int var_13 = -1700887427;
unsigned short var_14 = (unsigned short)19345;
int var_15 = -1062678665;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != (unsigned short)62478;
    value_mismatch |= var_15 != -1062666369;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_6, var_11, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
