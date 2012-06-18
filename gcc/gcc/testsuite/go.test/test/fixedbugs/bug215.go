// errchk $G $D/$F.go

// Copyright 2009 The Go Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

// Used to crash the compiler.
// http://code.google.com/p/go/issues/detail?id=158

package main

type A struct {	a A }	// ERROR "recursive"
func foo()		{ new(A).bar() }
func (a A) bar()	{}
