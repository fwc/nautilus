/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5585
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5585
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
void test(val<unsigned short> var_0, val<signed char> var_7, val<long long int> var_10, val<int> zero, val<unsigned char*> var_14, val<bool*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) min((*var_14), (((/* implicit */val<unsigned char>) (((~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<short>)17256))))))) + (((/* implicit */val<int>) min((min((((/* implicit */val<short>) var_7)), ((val<short>)17256))), (((/* implicit */val<short>) (val<signed char>)-2))))))))));
    *var_15 = ((/* implicit */val<bool>) max((*var_15), (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) (val<short>)6800)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((var_0), (((/* implicit */val<unsigned short>) (val<signed char>)80)))))) : (18446744073709551615ULL))) * (((/* implicit */val<unsigned long long int>) (+(var_10)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61110;
signed char var_7 = (signed char)-10;
long long int var_10 = -3194590519488052947LL;
int zero = 0;
unsigned char var_14 = (unsigned char)198;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)198;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_10, zero, &var_14, &var_15);
  checksum();
}
