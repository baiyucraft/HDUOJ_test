//Problem Description
//RPG girls����ʹ��һ��ȥ���ֳ��棬���ڿ���������������Ĺ�ɽ���ˡ����ǣ���ɽ����ÿһ��ֻ��������λ�����һ����������ĵĹ�أ�����ÿ��Ů�������Ҹ���������partner����ͬ�������ǣ�ÿ��Ů�����и��Ե��뷨���ٸ����Ӱѣ�RabbitֻԸ���XHD��PQK��partner��GrassֻԸ���linle��LL��partner��PrincessSnowԸ���ˮ�����ӻ�α�����partner�����ǵ��������⣬boss������ֻ���ҵ�partner����ȥ����ɽ�����������ˣ��ٺ٣���վ�����濴�Űɡ�������Acmer������԰�æ��������ж��ٶ���Ͽ������Ϲ�ɽ����
//
//Input
//�������ݵĵ�һ������������K, M, N���ֱ��ʾ���ܵ������Ŀ��Ů����������������������0 < K <= 1000
//	1 <= N ��M <= 500.��������K�У�ÿ�������������ֱ��ʾŮ��AiԸ�������Bj��partner�����һ��0�������롣
//
//Output
//����ÿ�����ݣ����һ����������ʾ�������Ϲ�ɽ��������������
#include "problem.h"
#include <iostream>
using namespace std;

int male, fmale;//�Ա���ӦΪȫ�ֱ���
int cp[501][501], girl[501], used[501];

bool find(int x){
    //Ϊ����ѡ���ʵ�Ů������1��ʼ
    for (int i = 1; i <= fmale; i++) {
        //����Ů���кøУ���û�м��������ֹ��������ͬһ��Ů����
        if (cp[x][i] == 1 && used[i] == 0) {
            used[i] = 1;
            //����Ů��δ��ѡ��򱻸�Ů��ѡ�������������ѡ��
            if (girl[i] == 0 || find(girl[i])) {
                //��Ů����x���
                girl[i] = x;
                return true;
            }
        }
    }
    return false;
}
void problem2063() {
    int k, a, b;
    int sum, i;
    while (cin >> k && k) {
        cin >> fmale >> male;
        sum = 0;
        //��ʼ��0����ͬ��
        memset(cp, 0, sizeof(cp));
        memset(girl, 0, sizeof(girl));
        for (i = 1; i <= k; i++) {
            cin >> a >> b;
            cp[b][a] = 1;
        }
        //��һ��������ʼѡ��
        for (i = 1; i <= male; i++) {
            //��ʼ��0����ʾ������δ���κ�Ů�����Թ���
            memset(used, 0, sizeof(used));
            if (find(i))//��Գɹ�
                sum = sum + 1;
        }
        cout << sum << endl;
    }
}