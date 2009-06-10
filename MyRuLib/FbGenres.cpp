#include "FbGenres.h"

struct GenreStruct {
	wxChar letter;
	wxString code;
	wxString name;
};

const GenreStruct genres_list[] = {
    {wxT('0'), wxT("sf_history"), _("�������������� �������")},
    {wxT('1'), wxT("sf_action"), _("������ ����������")},
    {wxT('2'), wxT("sf_epic"), _("��������� ����������")},
    {wxT('3'), wxT("sf_heroic"), _("����������� ����������")},
    {wxT('4'), wxT("sf_detective"), _("����������� ����������")},
    {wxT('5'), wxT("sf_cyberpunk"), _("���������")},
    {wxT('6'), wxT("sf_space"), _("����������� ����������")},
    {wxT('7'), wxT("sf_social"), _("���������-��������������� ����������")},
    {wxT('8'), wxT("sf_horror"), _("����� � �������")},
    {wxT('9'), wxT("sf_humor"), _("�������������� ����������")},
    {wxT('A'), wxT("sf_fantasy"), _("�������")},
    {wxT('B'), wxT("sf"), _("������� ����������")},
    {wxT('C'), wxT("det_classic"), _("������������ ��������")},
    {wxT('D'), wxT("det_police"), _("����������� ��������")},
    {wxT('E'), wxT("det_action"), _("������")},
    {wxT('F'), wxT("det_irony"), _("����������� ��������")},
    {wxT('G'), wxT("det_history"), _("������������ ��������")},
    {wxT('H'), wxT("det_espionage"), _("��������� ��������")},
    {wxT('I'), wxT("det_crime"), _("������������ ��������")},
    {wxT('J'), wxT("det_political"), _("������������ ��������")},
    {wxT('K'), wxT("det_maniac"), _("�������")},
    {wxT('L'), wxT("det_hard"), _("������ ��������")},
    {wxT('M'), wxT("thriller"), _("�������")},
    {wxT('N'), wxT("detective"), _("��������")},
    {wxT('O'), wxT("prose_classic"), _("������������ �����")},
    {wxT('P'), wxT("prose_history"), _("������������ �����")},
    {wxT('Q'), wxT("prose_contemporary"), _("����������� �����")},
    {wxT('R'), wxT("prose_counter"), _("�������������")},
    {wxT('S'), wxT("prose_rus_classic"), _("������� ������������ �����")},
    {wxT('T'), wxT("prose_su_classics"), _("��������� ������������ �����")},
    {wxT('U'), wxT("love_contemporary"), _("����������� �������� ������")},
    {wxT('V'), wxT("love_history"), _("������������ �������� ������")},
    {wxT('W'), wxT("love_detective"), _("������������� �������� ������")},
    {wxT('X'), wxT("love_short"), _("�������� �������� ������")},
    {wxT('Y'), wxT("love_erotica"), _("�������")},
    {wxT('Z'), wxT("adv_western"), _("�������")},
    {wxT('a'), wxT("adv_history"), _("������������ �����������")},
    {wxT('b'), wxT("adv_indian"), _("����������� ��� ��������")},
    {wxT('c'), wxT("adv_maritime"), _("������� �����������")},
    {wxT('d'), wxT("adv_geo"), _("����������� � ���������")},
    {wxT('e'), wxT("adv_animal"), _("������� � ��������")},
    {wxT('f'), wxT("adventure"), _("�����������")},
    {wxT('g'), wxT("child_tale"), _("������")},
    {wxT('h'), wxT("child_verse"), _("������� �����")},
    {wxT('i'), wxT("child_prose"), _("�������� �����")},
    {wxT('j'), wxT("child_sf"), _("������� ����������")},
    {wxT('k'), wxT("child_det"), _("������� �������������")},
    {wxT('l'), wxT("child_adv"), _("������� �����������")},
    {wxT('m'), wxT("child_education"), _("������� ��������������� ����������")},
    {wxT('n'), wxT("children"), _("������� ����������")},
    {wxT('o'), wxT("poetry"), _("������")},
    {wxT('p'), wxT("dramaturgy"), _("�����������")},
    {wxT('q'), wxT("antique_ant"), _("�������� ����������")},
    {wxT('r'), wxT("antique_european"), _("����������� ��������� ����������")},
    {wxT('s'), wxT("antique_russian"), _("������������� ����������")},
    {wxT('t'), wxT("antique_east"), _("��������������� ����������")},
    {wxT('u'), wxT("antique_myths"), _("����. �������. ����")},
    {wxT('v'), wxT("antique"), _("��������� ����������")},
    {wxT('w'), wxT("sci_history"), _("�������")},
    {wxT('x'), wxT("sci_psychology"), _("����������")},
    {wxT('y'), wxT("sci_culture"), _("�������������")},
    {wxT('z'), wxT("sci_religion"), _("��������������")},
    {wxT('�'), wxT("sci_philosophy"), _("���������")},
    {wxT('�'), wxT("sci_politics"), _("��������")},
    {wxT('�'), wxT("sci_business"), _("������� ����������")},
    {wxT('�'), wxT("sci_juris"), _("�������������")},
    {wxT('�'), wxT("sci_linguistic"), _("�����������")},
    {wxT('�'), wxT("sci_medicine"), _("��������")},
    {wxT('�'), wxT("sci_phys"), _("������")},
    {wxT('�'), wxT("sci_math"), _("����������")},
    {wxT('�'), wxT("sci_chem"), _("�����")},
    {wxT('�'), wxT("sci_biology"), _("��������")},
    {wxT('�'), wxT("sci_tech"), _("����������� �����")},
    {wxT('�'), wxT("science"), _("������� ����������")},
    {wxT('�'), wxT("comp_www"), _("��������")},
    {wxT('�'), wxT("comp_programming"), _("����������������")},
    {wxT('�'), wxT("comp_hard"), _("������������ ������ (���������� �����������)")},
    {wxT('�'), wxT("comp_soft"), _("���������")},
    {wxT('�'), wxT("comp_db"), _("���� ������")},
    {wxT('�'), wxT("comp_osnet"), _("�� � ����")},
    {wxT('�'), wxT("computers"), _("����������� ����������")},
    {wxT('�'), wxT("ref_encyc"), _("������������")},
    {wxT('�'), wxT("ref_dict"), _("�������")},
    {wxT('�'), wxT("ref_ref"), _("�����������")},
    {wxT('�'), wxT("ref_guide"), _("�����������")},
    {wxT('�'), wxT("reference"), _("���������� ����������")},
    {wxT('�'), wxT("nonf_biography"), _("��������� � �������")},
    {wxT('�'), wxT("nonf_publicism"), _("������������")},
    {wxT('�'), wxT("nonf_criticism"), _("�������")},
    {wxT('�'), wxT("design"), _("��������� � ������")},
    {wxT('�'), wxT("nonfiction"), _("�������������� ����������")},
    {wxT('�'), wxT("religion_rel"), _("�������")},
    {wxT('�'), wxT("religion_esoterics"), _("���������")},
    {wxT('�'), wxT("religion_self"), _("���������������������")},
    {wxT('�'), wxT("religion"), _("���������� ����������")},
    {wxT('�'), wxT("humor_anecdote"), _("��������")},
    {wxT('�'), wxT("humor_prose"), _("�������������� �����")},
    {wxT('�'), wxT("humor_verse"), _("�������������� �����")},
    {wxT('�'), wxT("humor"), _("����")},
    {wxT('�'), wxT("home_cooking"), _("���������")},
    {wxT('�'), wxT("home_pets"), _("�������� ��������")},
    {wxT('�'), wxT("home_crafts"), _("����� � �������")},
    {wxT('�'), wxT("home_entertain"), _("�����������")},
    {wxT('�'), wxT("home_health"), _("��������")},
    {wxT('�'), wxT("home_garden"), _("��� � ������")},
    {wxT('�'), wxT("home_diy"), _("������ ���")},
    {wxT('�'), wxT("home_sport"), _("�����")},
    {wxT('�'), wxT("home_sex"), _("�������, ����")},
    {wxT('�'), wxT("home"), _("�����������")},
    {0, wxEmptyString, wxEmptyString},
};

const size_t genres_count = sizeof(genres_list) / sizeof(GenreStruct);

wxString FbGenres::Char(wxString &code)
{
    for (size_t i=0; genres_list[i].letter; i++)
        if (genres_list[i].code == code)
            return genres_list[i].letter;
    return wxEmptyString;
}

wxString FbGenres::Code(wxChar &letter)
{
    for (size_t i=0; genres_list[i].letter; i++)
        if (genres_list[i].letter == letter)
            return genres_list[i].code;
    return wxEmptyString;
}

wxString FbGenres::Name(wxChar &letter)
{
    for (size_t i=0; genres_list[i].letter; i++)
        if (genres_list[i].letter == letter)
            return genres_list[i].name;
    return wxEmptyString;
}

