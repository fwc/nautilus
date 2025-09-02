/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4592
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4592
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
void test(val<signed char> var_4, val<unsigned char> var_6, val<bool> var_11, val<long long int> var_12, val<short> var_13, val<int> zero, val<unsigned long long int*> var_15, val<unsigned short*> var_16) {
    *var_15 &= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_13)) ? ((+(var_12))) : (((/* implicit */val<long long int>) min(((~(((/* implicit */val<int>) var_4)))), (((/* implicit */val<int>) var_6)))))));
    *var_16 += ((/* implicit */val<unsigned short>) (-(((((/* implicit */val<int>) var_11)) | (((/* implicit */val<int>) var_6))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)26;
unsigned char var_6 = (unsigned char)185;
bool var_11 = (bool)1;
long long int var_12 = -787391490765581221LL;
short var_13 = (short)-32256;
int zero = 0;
unsigned long long int var_15 = 8535866090865875142ULL;
unsigned short var_16 = (unsigned short)57055;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 8363215964438827074ULL;
    value_mismatch |= var_16 != (unsigned short)56870;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_11, var_12, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
