/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6469
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6469
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
void test(val<unsigned char> var_2, val<unsigned char> var_3, val<unsigned short> var_7, val<signed char> var_8, val<unsigned long long int> var_10, val<unsigned short> var_12, val<unsigned short> var_13, val<unsigned int> var_14, val<int> zero, val<unsigned char*> var_15, val<unsigned short*> var_16, val<short*> var_17, val<signed char*> var_18, val<bool*> var_19) {
    *var_15 = var_2;
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) max(((val<unsigned char>)150), (((/* implicit */val<unsigned char>) (val<bool>)1)))))))) == (((((/* implicit */val<int>) var_7)) % (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) != (3028377405581292121ULL))))))));
    *var_17 = ((/* implicit */val<short>) var_10);
    *var_18 = ((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) (((val<bool>)1) ? (var_14) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))))) ? ((+(7935918936193549570LL))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))))) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8)))));
    *var_19 -= ((/* implicit */val<bool>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)233;
unsigned char var_3 = (unsigned char)227;
unsigned short var_7 = (unsigned short)65126;
signed char var_8 = (signed char)91;
unsigned long long int var_10 = 4211567752948383380ULL;
unsigned short var_12 = (unsigned short)20483;
unsigned short var_13 = (unsigned short)3577;
unsigned int var_14 = 2173209738U;
int zero = 0;
unsigned char var_15 = (unsigned char)17;
unsigned short var_16 = (unsigned short)16982;
short var_17 = (short)-19480;
signed char var_18 = (signed char)126;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)233;
    value_mismatch |= var_16 != (unsigned short)1;
    value_mismatch |= var_17 != (short)32404;
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_8, var_10, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
