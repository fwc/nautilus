/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8735
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8735
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
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<unsigned short> var_6, val<short> var_7, val<unsigned short> var_8, val<bool> var_9, val<int> zero, val<long long int*> var_10, val<long long int*> var_11, val<int*> var_12, val<unsigned int*> var_13) {
    *var_10 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) var_8)), (min((((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) (val<unsigned char>)129)), (1672599239)))), (max((4294967278U), (((/* implicit */val<unsigned int>) var_8))))))));
    *var_11 = ((/* implicit */val<long long int>) min((max((max(((val<unsigned short>)48791), (((/* implicit */val<unsigned short>) var_7)))), (min((var_6), (var_1))))), (var_0)));
    *var_12 |= ((/* implicit */val<int>) var_1);
    *var_13 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) max((min((var_7), (((/* implicit */val<short>) var_9)))), (((/* implicit */val<short>) min(((val<bool>)1), ((val<bool>)1))))))), (min((((/* implicit */val<int>) var_7)), (min((((/* implicit */val<int>) var_6)), (1465550557)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28222;
unsigned short var_1 = (unsigned short)65331;
unsigned short var_6 = (unsigned short)40653;
short var_7 = (short)29568;
unsigned short var_8 = (unsigned short)50802;
bool var_9 = (bool)1;
int zero = 0;
long long int var_10 = -1589178135711845333LL;
long long int var_11 = 3146181054073589381LL;
int var_12 = -1139417452;
unsigned int var_13 = 1078871475U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 50802LL;
    value_mismatch |= var_11 != 28222LL;
    value_mismatch |= var_12 != -1139408969;
    value_mismatch |= var_13 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
