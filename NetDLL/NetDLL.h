// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� NETDLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// NETDLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef NETDLL_EXPORTS
#define NETDLL_API __declspec(dllexport)
#else
#define NETDLL_API __declspec(dllimport)
#endif

// �����Ǵ� NetDLL.dll ������
class NETDLL_API CNetDLL {
public:
	CNetDLL(void);
	// TODO: �ڴ��������ķ�����
};

extern NETDLL_API int nNetDLL;

NETDLL_API int fnNetDLL(void);