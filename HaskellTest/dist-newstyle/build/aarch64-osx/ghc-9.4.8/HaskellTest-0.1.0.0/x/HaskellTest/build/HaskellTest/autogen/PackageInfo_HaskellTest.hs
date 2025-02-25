{-# LANGUAGE NoRebindableSyntax #-}
{-# OPTIONS_GHC -fno-warn-missing-import-lists #-}
{-# OPTIONS_GHC -w #-}
module PackageInfo_HaskellTest (
    name,
    version,
    synopsis,
    copyright,
    homepage,
  ) where

import Data.Version (Version(..))
import Prelude

name :: String
name = "HaskellTest"
version :: Version
version = Version [0,1,0,0] []

synopsis :: String
synopsis = "Testing merge and quicksort algorithms"
copyright :: String
copyright = ""
homepage :: String
homepage = ""
