/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4938
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4938
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
void test(val<int> var_1, val<unsigned short> var_3, val<long long int> var_10, val<unsigned long long int> var_12, val<int> zero, val<int*> var_14, val<unsigned int*> var_15, val<long long int*> var_16, val<unsigned short*> var_17) {
    *var_14 = ((/* implicit */val<int>) min((((max((12851880140813940173ULL), (((/* implicit */val<unsigned long long int>) var_10)))) >> (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)32)) && (((/* implicit */val<bool>) var_1))))))), (((/* implicit */val<unsigned long long int>) -956927466))));
    *var_15 = ((/* implicit */val<unsigned int>) (!(((((/* implicit */val<bool>) (val<unsigned short>)8023)) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)8023)) ? (((/* implicit */val<int>) (val<unsigned short>)8019)) : (((/* implicit */val<int>) (val<unsigned short>)57513)))))))));
    *var_16 = ((/* implicit */val<long long int>) ((min((max((var_12), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)112)))), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)57513)))) - (17588951430547252021ULL)));
    *var_17 = ((/* implicit */val<unsigned short>) ((val<unsigned int>) var_3));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1108907994;
unsigned short var_3 = (unsigned short)53348;
long long int var_10 = -297095214952390584LL;
unsigned long long int var_12 = 2813413663613710444ULL;
int zero = 0;
int var_14 = -648654861;
unsigned int var_15 = 526601322U;
long long int var_16 = 2730819808496493473LL;
unsigned short var_17 = (unsigned short)27940;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -265965532;
    value_mismatch |= var_15 != 0U;
    value_mismatch |= var_16 != 857792643162357108LL;
    value_mismatch |= var_17 != (unsigned short)53348;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_10, var_12, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
