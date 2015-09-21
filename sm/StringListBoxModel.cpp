/*
  ==============================================================================

    StringListBoxModel.cpp
    Created: 21 Sep 2015 12:08:25pm
    Author:  caps

  ==============================================================================
*/

#include "StringListBoxModel.hpp"

namespace SM    //Sudden Magic
{

StringListBoxModel::StringListBoxModel()
    : juce::ListBoxModel()
{
}

StringListBoxModel::~StringListBoxModel()
{
    //nothing special needed
}

int StringListBoxModel::getNumRows() const
{
    return static_cast<int>(items.size());
};

int StringListBoxModel::getNumRows()
{
    return static_cast<int>(items.size());
};

void StringListBoxModel::paintListBoxItem(const int rowNumber,
                                          juce::Graphics &g,
                                          const int width,
                                          const int height,
                                          const bool rowIsSelected) const
{
    if (rowNumber < getNumRows())
    {
        //do the drawing
    }
};

void StringListBoxModel::paintListBoxItem(const int rowNumber,
                                          juce::Graphics &g,
                                          const int width,
                                          const int height,
                                          const bool rowIsSelected)
{
    if (rowNumber < getNumRows())
    {
        //do the drawing
    }
};

void StringListBoxModel::addRow()
{
    items.emplace_back(L"");
}

void StringListBoxModel::addRow(const std::wstring& in)
{
    items.emplace_back(in);
}

}   //end namespace SM