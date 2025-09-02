/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8378
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8378
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
void test(val<unsigned short> var_1, val<bool> var_3, val<signed char> var_4, val<long long int> var_8, val<int> zero, val<unsigned long long int*> var_17, val<long long int*> var_18, val<unsigned char*> var_19, val<unsigned short*> var_20) {
    *var_17 = ((/* implicit */val<unsigned long long int>) var_8);
    *var_18 = ((/* implicit */val<long long int>) var_1);
    *var_19 = ((/* implicit */val<unsigned char>) ((val<short>) var_1));
    *var_20 = ((/* implicit */val<unsigned short>) (~(((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_4)), (var_8)))) ? ((~(131071ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((((/* implicit */val<signed char>) var_3)), ((val<signed char>)-1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53809;
bool var_3 = (bool)1;
signed char var_4 = (signed char)2;
long long int var_8 = -8614734117137528976LL;
int zero = 0;
unsigned long long int var_17 = 17178654212842812738ULL;
long long int var_18 = -6392595620521031638LL;
unsigned char var_19 = (unsigned char)224;
unsigned short var_20 = (unsigned short)2917;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 9832009956572022640ULL;
    value_mismatch |= var_18 != 53809LL;
    value_mismatch |= var_19 != (unsigned char)49;
    value_mismatch |= var_20 != (unsigned short)65535;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_8, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
