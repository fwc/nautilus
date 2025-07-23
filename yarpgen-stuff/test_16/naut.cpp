/*
yarpgen version 2.0 (build 27a5fb5 on 1980:01:01)
Seed: 16
Invocation: ./yarpgen --seed=16 --nautilus=true -o /home/marg/nes/nautilus/yarpgen-stuff/test_16
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<int> var_0, val<signed char> var_2, val<unsigned char> var_4, val<bool> var_5, val<int> var_7, val<unsigned int> var_8, val<unsigned int> var_9, val<unsigned int> var_10, val<bool> var_11, val<int> zero, val<long long int*> var_13, val<unsigned char*> var_14, val<bool*> var_15, val<unsigned short*> var_16, val<unsigned char*> var_17, val<unsigned char*> var_18, val<unsigned long long int*> var_19) {
    *var_13 = ((/* implicit */val<long long int>) var_7);
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((val<unsigned char>) 9223372036854775807LL))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))) : (((/* implicit */val<int>) ((val<signed char>) ((6336256414609255991ULL) - (((/* implicit */val<unsigned long long int>) var_10))))))));
    *var_15 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_11)), (var_10)));
    if (((/* implicit */val<bool>) max((var_0), (var_0))))
    {
        *var_16 ^= ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((val<int>) var_8))) != (((val<unsigned long long int>) 271924041))));
        *var_17 = ((/* implicit */val<unsigned char>) var_9);
        *var_18 = ((/* implicit */val<unsigned char>) max((var_18), (((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) ((((val<unsigned long long int>) (val<short>)32767)) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) -7769523607142903200LL))))))) << (((/* implicit */val<int>) var_5)))))));
    }

    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (~(9223372036854775807LL)))) ? (((val<unsigned int>) var_4)) : (((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<short>)-32761))))), (((((/* implicit */val<int>) var_2)) >> (((var_10) - (1072001567U))))))))));
}
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 401503696;
signed char var_2 = (signed char)27;
unsigned char var_4 = (unsigned char)44;
bool var_5 = (bool)1;
int var_7 = -538526812;
unsigned int var_8 = 1169084457U;
unsigned int var_9 = 874806778U;
unsigned int var_10 = 1072001578U;
bool var_11 = (bool)0;
int zero = 0;
long long int var_13 = -6193441818722122798LL;
unsigned char var_14 = (unsigned char)25;
bool var_15 = (bool)0;
unsigned short var_16 = (unsigned short)59643;
unsigned char var_17 = (unsigned char)217;
unsigned char var_18 = (unsigned char)240;
unsigned long long int var_19 = 13137870964700326010ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_7, var_8, var_9, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  std::cout << "Result: " << seed << std::endl;
}
