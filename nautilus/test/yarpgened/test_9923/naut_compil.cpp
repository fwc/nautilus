/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9923
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9923
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
void test(val<unsigned short> var_0, val<long long int> var_2, val<unsigned short> var_5, val<int> var_6, val<long long int> var_8, val<unsigned short> var_9, val<unsigned char> var_10, val<long long int> var_13, val<unsigned short> var_16, val<int> zero, val<unsigned short*> var_20, val<unsigned short*> var_21, val<signed char*> var_22, val<short*> var_23, val<short*> var_24) {
    *var_20 += ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_10))))) ? (((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_5)), (-1882309323)))) : (max((var_2), (((/* implicit */val<long long int>) var_16))))))) ? (((/* implicit */val<long long int>) var_6)) : (var_2)));
    *var_21 = ((/* implicit */val<unsigned short>) 991705754);
    *var_22 = ((/* implicit */val<signed char>) min((((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) -1537816698143163847LL)) ? (((/* implicit */val<int>) (val<short>)22588)) : (((/* implicit */val<int>) (val<unsigned short>)13035)))), (((/* implicit */val<int>) min((var_9), (var_0))))))), (2966404520308585776LL)));
    *var_23 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) ((val<short>) var_2))), (var_0)))) ? (((((/* implicit */val<bool>) (+(-1882309323)))) ? (var_8) : (var_8))) : (var_13)));
    *var_24 = ((/* implicit */val<short>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1975;
long long int var_2 = 539086739225446879LL;
unsigned short var_5 = (unsigned short)61710;
int var_6 = 580420036;
long long int var_8 = 7603809379971283029LL;
unsigned short var_9 = (unsigned short)61294;
unsigned char var_10 = (unsigned char)131;
long long int var_13 = 4398198134632195960LL;
unsigned short var_16 = (unsigned short)3425;
int zero = 0;
unsigned short var_20 = (unsigned short)48686;
unsigned short var_21 = (unsigned short)42398;
signed char var_22 = (signed char)36;
short var_23 = (short)-18717;
short var_24 = (short)-22307;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)16370;
    value_mismatch |= var_21 != (unsigned short)15002;
    value_mismatch |= var_22 != (signed char)-73;
    value_mismatch |= var_23 != (short)-18347;
    value_mismatch |= var_24 != (short)131;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_8, var_9, var_10, var_13, var_16, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
}
