/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8758
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8758
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
void test(val<unsigned char> var_0, val<signed char> var_1, val<int> var_4, val<signed char> var_7, val<unsigned short> var_8, val<int> var_11, val<int> zero, val<short*> var_12, val<unsigned long long int*> var_13) {
    *var_12 = ((/* implicit */val<short>) var_4);
    *var_13 *= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<signed char>)-112)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)32767)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<unsigned short>)0))))) ? ((+(((/* implicit */val<int>) (val<unsigned short>)31790)))) : ((-(((/* implicit */val<int>) var_1)))))) : (min((((((/* implicit */val<int>) var_7)) % (var_11))), (((/* implicit */val<int>) min((var_8), ((val<unsigned short>)31790))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
signed char var_1 = (signed char)41;
int var_4 = 1198991937;
signed char var_7 = (signed char)70;
unsigned short var_8 = (unsigned short)55458;
int var_11 = 1563639236;
int zero = 0;
short var_12 = (short)-12891;
unsigned long long int var_13 = 163140580060194897ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)10817;
    value_mismatch |= var_13 != 2703955401211771534ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_7, var_8, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
