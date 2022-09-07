#pragma once

#include <vector>

// [][][][][][][][][][]
// 1 : Root Node
// Index * 2 : Left =>
// Index * 2 + 1 : Right => 3

class Heap
{
public:
    Heap() = default;
    ~Heap() = default;

    // ���� ���� ū ���Ҹ� ��ȯ�Ѵ�.
    const int& top() const;

    // ���� ������� üũ�Ѵ�.
    bool            empty() const;

    // ���� ũ�⸦ ��ȯ�Ѵ�.
    size_t          size() const;

    // ���� ���� �����Ѵ�.
    void            push(int value);

    // ������ ���� �����Ѵ�.
    void            pop();
private:
    std::vector<int>     _container;
};

