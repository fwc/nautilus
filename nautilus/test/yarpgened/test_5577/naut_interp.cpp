/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5577
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5577
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
void test(val<int> var_3, val<long long int> var_9, val<unsigned short> var_10, val<long long int> var_11, val<signed char> var_16, val<signed char> var_19, val<int> zero, val<unsigned long long int*> var_20, val<bool*> var_21, val<short*> var_22, val<int*> var_23, val<unsigned short*> var_24) {
    *var_20 = ((/* implicit */val<unsigned long long int>) var_9);
    *var_21 = ((/* implicit */val<bool>) var_16);
    *var_22 = ((/* implicit */val<short>) min((((/* implicit */val<int>) ((val<short>) ((val<int>) var_3)))), (max((((/* implicit */val<int>) ((val<unsigned char>) var_11))), ((~(((/* implicit */val<int>) (val<bool>)1))))))));
    *var_23 -= ((/* implicit */val<int>) min((var_11), (((/* implicit */val<long long int>) var_19))));
    *var_24 = max((((/* implicit */val<unsigned short>) ((val<short>) (val<bool>)1))), (var_10));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1463173521;
long long int var_9 = -8373913895140610705LL;
unsigned short var_10 = (unsigned short)18542;
long long int var_11 = 6174117418322460701LL;
signed char var_16 = (signed char)57;
signed char var_19 = (signed char)35;
int zero = 0;
unsigned long long int var_20 = 5867514827742058070ULL;
bool var_21 = (bool)1;
short var_22 = (short)13907;
int var_23 = 462182855;
unsigned short var_24 = (unsigned short)9940;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 10072830178568940911ULL;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (short)-16785;
    value_mismatch |= var_23 != 462182820;
    value_mismatch |= var_24 != (unsigned short)18542;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, var_10, var_11, var_16, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
