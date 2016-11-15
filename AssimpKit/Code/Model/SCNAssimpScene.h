
/*
---------------------------------------------------------------------------
Assimp to Scene Kit Library (AssimpKit)
---------------------------------------------------------------------------
 Copyright (c) 2016, Deepak Surti, Ison Apps, AssimpKit team
All rights reserved.
Redistribution and use of this software in source and binary forms,
with or without modification, are permitted provided that the following
conditions are met:
* Redistributions of source code must retain the above
  copyright notice, this list of conditions and the
  following disclaimer.
* Redistributions in binary form must reproduce the above
  copyright notice, this list of conditions and the
  following disclaimer in the documentation and/or other
  materials provided with the distribution.
* Neither the name of the AssimpKit team, nor the names of its
  contributors may be used to endorse or promote products
  derived from this software without specific prior
  written permission of the AssimpKit team.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
---------------------------------------------------------------------------
*/

#import "SCNAssimpAnimation.h"
#import <SceneKit/SceneKit.h>


/**
 A scene graph—a hierarchy of nodes with attached geometries, lights, cameras 
 and other attributes that together form a displayable 3D scene.
 
 This scene graph is generated by parsing a scene graph that represents a file
 loaded with the assimp library.
 */
@interface SCNAssimpScene : SCNScene

#pragma mark - Animation data

/**
 @name Animation data
 */

/**
 The dictionary of SCNAssimpAnimation objects, for each animation in the scene.
 */
@property (readonly, nonatomic) NSMutableDictionary *animations;

#pragma mark - Creating a new scene animation
/**
 @name Creating a new scene animation
 */

/**
 Creates a new scene animation, without any animation data.

 @return A new scene animation object.
 */
- (id)init;

#pragma mark - Add, fetch scene animations

/**
 @name Add, fetch scene animations
 */

/**
 Adds an SCNAssimpAnimation object.

 @param assimpAnimation The scene animation object created from animation data.
 */
- (void)addAnimation:(SCNAssimpAnimation *)assimpAnimation;

/**
 Return the SCNAssimpAnimation object for the specified animation key.

 @param key The unique scene animation key.
 @return The scene animation object.
 */
- (SCNAssimpAnimation *)animationForKey:(NSString *)key;

@end
