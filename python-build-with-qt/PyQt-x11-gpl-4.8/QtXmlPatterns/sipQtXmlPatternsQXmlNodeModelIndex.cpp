/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:04:00 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtXmlPatterns.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 39 "sipQtXmlPatternsQXmlNodeModelIndex.cpp"

#line 91 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 43 "sipQtXmlPatternsQXmlNodeModelIndex.cpp"


extern "C" {static PyObject *meth_QXmlNodeModelIndex_data(PyObject *, PyObject *);}
static PyObject *meth_QXmlNodeModelIndex_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlNodeModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNodeModelIndex, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->data();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlNodeModelIndex, sipName_data, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlNodeModelIndex_internalPointer(PyObject *, PyObject *);}
static PyObject *meth_QXmlNodeModelIndex_internalPointer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlNodeModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNodeModelIndex, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 68 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
        sipRes = reinterpret_cast<PyObject *>(sipCpp->internalPointer());
        
        if (!sipRes)
            sipRes = Py_None;
        
        Py_INCREF(sipRes);
#line 92 "sipQtXmlPatternsQXmlNodeModelIndex.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlNodeModelIndex, sipName_internalPointer, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlNodeModelIndex_model(PyObject *, PyObject *);}
static PyObject *meth_QXmlNodeModelIndex_model(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlNodeModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNodeModelIndex, &sipCpp))
        {
            const QAbstractXmlNodeModel *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->model();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QAbstractXmlNodeModel *>(sipRes),sipType_QAbstractXmlNodeModel,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlNodeModelIndex, sipName_model, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlNodeModelIndex_additionalData(PyObject *, PyObject *);}
static PyObject *meth_QXmlNodeModelIndex_additionalData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlNodeModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNodeModelIndex, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->additionalData();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlNodeModelIndex, sipName_additionalData, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlNodeModelIndex_isNull(PyObject *, PyObject *);}
static PyObject *meth_QXmlNodeModelIndex_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlNodeModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlNodeModelIndex, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlNodeModelIndex, sipName_isNull, NULL);

    return NULL;
}


extern "C" {static long slot_QXmlNodeModelIndex___hash__(PyObject *);}
static long slot_QXmlNodeModelIndex___hash__(PyObject *sipSelf)
{
    QXmlNodeModelIndex *sipCpp = reinterpret_cast<QXmlNodeModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlNodeModelIndex));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 81 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
        sipRes = qHash(*sipCpp);
#line 201 "sipQtXmlPatternsQXmlNodeModelIndex.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QXmlNodeModelIndex___ne__(PyObject *,PyObject *);}
static PyObject *slot_QXmlNodeModelIndex___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlNodeModelIndex *sipCpp = reinterpret_cast<QXmlNodeModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlNodeModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlNodeModelIndex * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlNodeModelIndex, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QXmlNodeModelIndex::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXmlPatterns,ne_slot,sipType_QXmlNodeModelIndex,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QXmlNodeModelIndex___eq__(PyObject *,PyObject *);}
static PyObject *slot_QXmlNodeModelIndex___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlNodeModelIndex *sipCpp = reinterpret_cast<QXmlNodeModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlNodeModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlNodeModelIndex * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlNodeModelIndex, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QXmlNodeModelIndex::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXmlPatterns,eq_slot,sipType_QXmlNodeModelIndex,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlNodeModelIndex(void *, const sipTypeDef *);}
static void *cast_QXmlNodeModelIndex(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QXmlNodeModelIndex)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlNodeModelIndex(void *, int);}
static void release_QXmlNodeModelIndex(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QXmlNodeModelIndex *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QXmlNodeModelIndex(void *, SIP_SSIZE_T, const void *);}
static void assign_QXmlNodeModelIndex(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QXmlNodeModelIndex *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QXmlNodeModelIndex *>(sipSrc);
}


extern "C" {static void *array_QXmlNodeModelIndex(SIP_SSIZE_T);}
static void *array_QXmlNodeModelIndex(SIP_SSIZE_T sipNrElem)
{
    return new QXmlNodeModelIndex[sipNrElem];
}


extern "C" {static void *copy_QXmlNodeModelIndex(const void *, SIP_SSIZE_T);}
static void *copy_QXmlNodeModelIndex(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QXmlNodeModelIndex(reinterpret_cast<const QXmlNodeModelIndex *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlNodeModelIndex(sipSimpleWrapper *);}
static void dealloc_QXmlNodeModelIndex(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlNodeModelIndex(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QXmlNodeModelIndex(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QXmlNodeModelIndex(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlNodeModelIndex *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlNodeModelIndex();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QXmlNodeModelIndex * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlNodeModelIndex, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlNodeModelIndex(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QXmlNodeModelIndex[] = {
    {(void *)slot_QXmlNodeModelIndex___hash__, hash_slot},
    {(void *)slot_QXmlNodeModelIndex___ne__, ne_slot},
    {(void *)slot_QXmlNodeModelIndex___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QXmlNodeModelIndex[] = {
    {SIP_MLNAME_CAST(sipName_additionalData), meth_QXmlNodeModelIndex_additionalData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_data), meth_QXmlNodeModelIndex_data, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_internalPointer), meth_QXmlNodeModelIndex_internalPointer, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QXmlNodeModelIndex_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_model), meth_QXmlNodeModelIndex_model, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QXmlNodeModelIndex[] = {
    {sipName_Attribute, QXmlNodeModelIndex::Attribute, 15},
    {sipName_Comment, QXmlNodeModelIndex::Comment, 15},
    {sipName_Document, QXmlNodeModelIndex::Document, 15},
    {sipName_Element, QXmlNodeModelIndex::Element, 15},
    {sipName_Follows, QXmlNodeModelIndex::Follows, 14},
    {sipName_Is, QXmlNodeModelIndex::Is, 14},
    {sipName_Namespace, QXmlNodeModelIndex::Namespace, 15},
    {sipName_Precedes, QXmlNodeModelIndex::Precedes, 14},
    {sipName_ProcessingInstruction, QXmlNodeModelIndex::ProcessingInstruction, 15},
    {sipName_Text, QXmlNodeModelIndex::Text, 15},
};


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QXmlNodeModelIndex = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlNodeModelIndex,
        {0}
    },
    {
        sipNameNr_QXmlNodeModelIndex,
        {0, 0, 1},
        5, methods_QXmlNodeModelIndex,
        10, enummembers_QXmlNodeModelIndex,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QXmlNodeModelIndex,
    init_QXmlNodeModelIndex,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QXmlNodeModelIndex,
    assign_QXmlNodeModelIndex,
    array_QXmlNodeModelIndex,
    copy_QXmlNodeModelIndex,
    release_QXmlNodeModelIndex,
    cast_QXmlNodeModelIndex,
    0,
    0,
    0
},
    0,
    0,
    0
};
