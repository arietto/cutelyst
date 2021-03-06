/*
 * Copyright (C) 2018 Matthias Fehring <kontakt@buschmann23.de>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef CUTELYSTVALIDATORREQUIREDUNLESSSTASH_P_H
#define CUTELYSTVALIDATORREQUIREDUNLESSSTASH_P_H

#include "validatorrequiredunlessstash.h"
#include "validatorrule_p.h"

namespace Cutelyst {

class ValidatorRequiredUnlessStashPrivate : public ValidatorRulePrivate
{
public:
    ValidatorRequiredUnlessStashPrivate(const QString &f, const QString &sk, const QVariantList &sv, const ValidatorMessages &m) :
        ValidatorRulePrivate(f, m, QString()),
        stashKey(sk),
        stashValues(sv)
    {}

    QString stashKey;
    QVariantList stashValues;
};

}

#endif // CUTELYSTVALIDATORREQUIREDUNLESSSTASH_P_H
