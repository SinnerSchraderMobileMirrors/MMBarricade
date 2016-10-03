//
//  MMBarricadeTweaksResponseStore.h
//
// Copyright (c) 2015 Mutual Mobile (http://www.mutualmobile.com/)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import "MMBarricadeAbstractResponseStore.h"


NS_ASSUME_NONNULL_BEGIN

/**
 A Tweaks response store maintains information about selected responses in Facebook Tweaks. When
 utilizing a Tweaks response store, the registered configurations will be exposed through the Tweaks
 UI and can be adjusted at runtime. This can be useful when testing how you application UI responds
 to different possible API responses.
 */
@interface MMBarricadeTweaksResponseStore : MMBarricadeAbstractResponseStore

/**
 Category name used by Facebook Tweaks. Defaults to "MMBarricade".
 */
@property (nonatomic, copy) NSString *tweaksCategoryName;

/**
 Collection name used by Facebook Tweaks. Defaults to "Local Server".
 */
@property (nonatomic, copy) NSString *tweaksCollectionName;

@end

NS_ASSUME_NONNULL_END
