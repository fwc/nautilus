/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7635
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7635
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
void test(val<bool> var_3, val<int> var_6, val<unsigned char> var_7, val<int> zero, val<bool*> var_16, val<short*> var_17) {
    *var_16 = ((((/* implicit */val<int>) max(((val<unsigned char>)194), (var_7)))) == (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) ((val<bool>) 2147483633))) : (((/* implicit */val<int>) min(((val<unsigned char>)238), (var_7)))))));
    *var_17 = ((/* implicit */val<short>) (((((~(min((((/* implicit */val<long long int>) var_3)), (6409573534168353712LL))))) + (9223372036854775807LL))) >> (((-865929812) + (865929834)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
int var_6 = -1522183202;
unsigned char var_7 = (unsigned char)21;
int zero = 0;
bool var_16 = (bool)1;
short var_17 = (short)29572;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != (short)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_7, zero, &var_16, &var_17);
  checksum();
}
